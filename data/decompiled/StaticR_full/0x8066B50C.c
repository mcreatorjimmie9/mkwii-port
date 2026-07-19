/* Function at 0x8066B50C, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8066B50C(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8066B514
    /* stfd f31, 0x40(r1) */ // 0x8066B518
}