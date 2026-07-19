/* Function at 0x80650D68, size=20 bytes */
/* Stack frame: 160 bytes */
/* Calls: 1 function(s) */

void FUN_80650D68(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80650D70
    FUN_805E3430(); // bl 0x805E3430
}