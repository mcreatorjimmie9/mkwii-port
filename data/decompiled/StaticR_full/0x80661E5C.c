/* Function at 0x80661E5C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80661E5C(void)
{
    /* li r0, -1 */ // 0x80661E5C
    *(0 + r3) = r0; // stw @ 0x80661E60
    *(4 + r3) = r0; // stw @ 0x80661E64
    return;
}