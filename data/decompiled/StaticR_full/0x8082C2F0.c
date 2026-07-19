/* Function at 0x8082C2F0, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_8082C2F0(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8082C2F8
    /* stfd f31, 0x20(r1) */ // 0x8082C2FC
}