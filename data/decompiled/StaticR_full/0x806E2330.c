/* Function at 0x806E2330, size=20 bytes */
/* Stack frame: 448 bytes */
/* Calls: 1 function(s) */

void FUN_806E2330(void)
{
    /* Stack frame: -448(r1) */
    *(0x1c4 + r1) = r0; // stw @ 0x806E2338
    FUN_805E3430(); // bl 0x805E3430
}