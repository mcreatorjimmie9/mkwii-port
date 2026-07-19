/* Function at 0x806E1170, size=20 bytes */
/* Stack frame: 336 bytes */
/* Calls: 1 function(s) */

void FUN_806E1170(void)
{
    /* Stack frame: -336(r1) */
    *(0x154 + r1) = r0; // stw @ 0x806E1178
    FUN_805E3430(); // bl 0x805E3430
}