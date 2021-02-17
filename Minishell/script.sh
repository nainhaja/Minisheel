service php7.3-fpm start
service nginx reload
chmod go+rw /run/php/php7.2-fpm.sock
/etc/init.d/php7.3-fpm start
service nginx start;
/bin/bash
