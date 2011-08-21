"""
Fabfile for MJCSL / Ubercart deployment
Matt Hampel hampelm@umich.edu
19 April 2011
"""

from fabric.api import *

env.project_name = 'SID-Drupal7'

def production():
"""
Work on production environment
"""
    assert(False); # Not ready to deploy to prod
    env.settings = 'production'
    env.user = 'hampelm'
    env.hosts = ['sftp.itd.umich.edu']
    
    
    env.path = '/afs/umich.edu/group/s/sidet/Public/html'
    env.localpath = '/Applications/MAMP/htdocs/sid' # Not really necessary


def staging():
    """
    Work on staging environment
    """
    env.settings = 'staging'
    env.user = 'hampelm'
    env.hosts = ['sftp.itd.umich.edu']
    
    env.localmysqlpass = 'root'
    env.localmysqluser = 'root'
    
    env.path = '/afs/umich.edu/group/s/sidet/Public/html'
    env.localpath = '/Applications/MAMP/htdocs/sid'
    
    
def deploy():
    require('settings', provided_by=[production, staging])
    
    with cd(env.path):
        # pull in the specified tag
        require('settings', provided_by=[production, staging])
        run('git reset --hard')
        run('git checkout master')
        run('git pull origin master')
    
        fix_settings()
       #fix_htaccess()
    
        

def fix_settings():
    
    # move settings_remote to settings.php
    with cd(env.path):
        run('cp protected/config/settings_%(settings)s.php protected/config/settings.php' % env)
              
 
def fix_htaccess():
    with cd(env.path):
        run('cp .htaccess_remote .htaccess')
        
