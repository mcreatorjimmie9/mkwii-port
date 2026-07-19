/* Function at 0x8067CA68, size=20 bytes */
/* Stack frame: 640 bytes */
/* Calls: 1 function(s) */

void FUN_8067CA68(void)
{
    /* Stack frame: -640(r1) */
    *(0x284 + r1) = r0; // stw @ 0x8067CA70
    FUN_805E3430(); // bl 0x805E3430
}