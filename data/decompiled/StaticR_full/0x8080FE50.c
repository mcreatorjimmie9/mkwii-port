/* Function at 0x8080FE50, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_8080FE50(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x8080FE58
    /* stfd f31, 0xf0(r1) */ // 0x8080FE5C
}