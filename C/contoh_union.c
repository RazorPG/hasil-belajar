#include <stdio.h>

enum notif_type
{
    EMAIL,
    SMS
};

typedef struct
{
    char *title;
    char *message;
    enum notif_type type;
    union
    {
        char *phone_number;
        char *email_address;
    };
} notification;

void main()
{
    notification sms;
    notification email;

    sms.type = SMS;
    sms.title = "Greeting";
    sms.message = "Halo selamat datang";
    sms.phone_number = "081266654510";

    email.type = EMAIL;
    email.title = "welcome";
    email.message = "selamat datang di aplikasi";
    email.email_address = "rafidhilmi3@gmail.com";

    printf("##🔔 NOTIFACATION SMS ##\n");
    printf("to: %s\n", sms.phone_number);
    printf("message: %s\n", sms.message);

    printf("##✉️ NOTIFICATION EMAIL ##\n");
    printf("subject: %s\n", email.title);
    printf("to: %s\n", email.email_address);
    printf("message: %s\n", email.message);
}