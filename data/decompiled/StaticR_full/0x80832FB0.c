/* Function at 0x80832FB0, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_80832FB0(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80832FB8
    /* stfd f31, 0x20(r1) */ // 0x80832FBC
}