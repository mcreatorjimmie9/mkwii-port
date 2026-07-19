/* Function at 0x80662210, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80662210(void)
{
    /* li r0, 0 */ // 0x80662210
    *(0 + r3) = r0; // stw @ 0x80662214
    *(4 + r3) = r0; // stw @ 0x80662218
    return;
}