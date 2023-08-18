# Deep Client PHP extension implemented in C++

Deep Client - a way to connect your favourite language with Deep.

## Install/Build
```bash
docker-compose up
```

#### or
```bash
docker run -d -p 18080:80 --name my-php-container php:7.4.33-apache
```

### Next
```bash
apt update
apt install autoconf cmake make automake libtool git libboost-all-dev libssl-dev g++
```

### For PHP
```bash
apt install bison libxml2 libxml2-dev sqlite3 libsqlite3-dev
```

### For php-src
```bash
git clone https://github.com/php/php-src.git
cd php-src
./buildconf
./configure
make
```

### For PHP-CPP
```bash
apt install php7.4-dev
git clone https://github.com/CopernicaMarketingSoftware/PHP-CPP.git
cd PHP-CPP
mkdir php_headers zend_headers
find /app/php-src/main/ -type f -name "*.h" -exec cp --parents {} /app/PHP-CPP/php_headers \;
find /app/php-src/Zend/ -type f -name "*.h" -exec cp --parents {} /app/PHP-CPP/zend_headers \;
cmake .
make
```

## For main project
```bash
find /app/PHP-CPP/ -type f -name "*.h" -exec cp --parents {} /app/extension-cpp \;
cmake .
make
```