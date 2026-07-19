/* Function at 0x8071C120, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_8071C120(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x8071C128
    /* stfd f31, 0xc0(r1) */ // 0x8071C12C
}