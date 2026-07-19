/* Function at 0x808F928C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_808F928C(void)
{
    /* li r0, 0 */ // 0x808F928C
    *(0x20 + r3) = r0; // stw @ 0x808F9290
    *(0x24 + r3) = r0; // sth @ 0x808F9294
    return;
}