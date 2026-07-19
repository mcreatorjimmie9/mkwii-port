/* Function at 0x8077C4E4, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_8077C4E4(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x8077C4EC
    /* stfd f31, 0xf0(r1) */ // 0x8077C4F0
}