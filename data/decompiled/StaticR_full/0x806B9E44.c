/* Function at 0x806B9E44, size=20 bytes */
/* Stack frame: 240 bytes */
/* Calls: 1 function(s) */

void FUN_806B9E44(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x806B9E4C
    FUN_805E3430(); // bl 0x805E3430
}