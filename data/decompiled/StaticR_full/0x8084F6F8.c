/* Function at 0x8084F6F8, size=16 bytes */
/* Stack frame: 416 bytes */

void FUN_8084F6F8(void)
{
    /* Stack frame: -416(r1) */
    *(0x1a4 + r1) = r0; // stw @ 0x8084F700
    /* stfd f31, 0x190(r1) */ // 0x8084F704
}