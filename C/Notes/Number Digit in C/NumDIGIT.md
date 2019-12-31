# Getting Int Number Digits

* To get a Integer Number Digits we should consider use a while loop 

## Steps
### Scan the Number
```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int number;
    scanf("%d", &number);

} 
```
____

### Start a while loop
```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int number;
    scanf("%d", &number);
    
    int digit;

    while(n) {
        digit = n % 10;
        n /= 10;
    }

    return 0;

} 
```

© [Filipe Dias](https://www.github.com/filypsdias)

