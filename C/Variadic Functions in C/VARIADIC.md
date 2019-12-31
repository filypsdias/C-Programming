# Variable Number of Arguments

* To work with functions with variable number of arguments we should consider using the __<stdarg.h>__ lib

## Steps
### Create a Variable Argument list
```C
#include <stdio.h>
#include <stdarg.h>

int main(int arg_count, ...) {

    va_list ap;

} 
```
____

### Start the List passing the arg_count parameter
```C
#include <stdio.h>
#include <stdarg.h>

int main(int arg_count, ...) {

    va_list ap;
    va_start(ap, arg_count);

} 
```
___

### Operate using List Args using Args types
```C
#include <stdio.h>
#include <stdarg.h>

int main(int arg_count, ...) {

    va_list ap;
    va_start(ap, arg_count);

    int first_index = va_arg(ap, int);

} 
```

### Close (end) the List
```C
#include <stdio.h>
#include <stdarg.h>

int main(int arg_count, ...) {

    va_list ap;
    va_start(ap, arg_count);
   
    int first_index = va_arg(ap, int);
    va_end(ap);
} 
```

© [Filipe Dias](https://www.github.com/filypsdias)

