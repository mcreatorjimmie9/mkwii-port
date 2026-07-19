/* Function at 0x806B59EC, size=20 bytes */
/* Stack frame: 432 bytes */
/* Calls: 1 function(s) */

void FUN_806B59EC(void)
{
    /* Stack frame: -432(r1) */
    *(0x1b4 + r1) = r0; // stw @ 0x806B59F4
    FUN_805E3430(); // bl 0x805E3430
}