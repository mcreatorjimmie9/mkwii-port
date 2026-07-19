/* Function at 0x805F5AC0, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_805F5AC0(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x805F5AC8
    /* stfd f31, 0x30(r1) */ // 0x805F5ACC
}