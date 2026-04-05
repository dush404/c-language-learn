#include <stdio.h>

struct Config {
    int max_users;
    int timeout;
};

int main() {
    const struct Config system_settings = {100, 30};
    
    // system_settings.max_users = 200; // This would cause a compiler error
    printf("Max Users: %d\n", system_settings.max_users);
    
    return 0;
}