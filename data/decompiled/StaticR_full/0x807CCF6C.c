/* Function at 0x807CCF6C, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_807CCF6C(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x807CCF74
    /* stfd f31, 0xf0(r1) */ // 0x807CCF78
}