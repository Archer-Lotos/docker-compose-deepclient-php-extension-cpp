FROM php:7.4.33-apache

# WORKDIR /app

EXPOSE 80

CMD ["apache2-foreground"]