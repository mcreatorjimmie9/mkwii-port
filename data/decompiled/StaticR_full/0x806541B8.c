/* Function at 0x806541B8, size=20 bytes */
/* Stack frame: 432 bytes */
/* Calls: 1 function(s) */

void FUN_806541B8(void)
{
    /* Stack frame: -432(r1) */
    *(0x1b4 + r1) = r0; // stw @ 0x806541C0
    FUN_805E3430(); // bl 0x805E3430
}