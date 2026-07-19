/* Function at 0x808FC9D0, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808FC9D0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x808FC9D8
    *(0x14 + r1) = r29; // stw @ 0x808FC9E8
    *(0x10 + r1) = r28; // stw @ 0x808FC9EC
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x808FC9F4
    r12 = *(0x68 + r12); // lwz @ 0x808FC9F8
    /* mtctr r12 */ // 0x808FC9FC
    /* bctrl  */ // 0x808FCA00
    /* lis r3, 0 */ // 0x808FCA04
    /* li r30, 0 */ // 0x808FCA08
    r0 = *(0 + r3); // lwz @ 0x808FCA0C
    /* li r29, 0 */ // 0x808FCA10
    *(0x14c + r28) = r0; // stw @ 0x808FCA14
    /* li r31, 0 */ // 0x808FCA18
    /* b 0x808fca54 */ // 0x808FCA1C
    r0 = *(0x314 + r28); // lwz @ 0x808FCA20
    r3 = r0 + r29; // 0x808FCA24
    *(8 + r3) = r31; // stw @ 0x808FCA28
    r3 = *(0x314 + r28); // lwz @ 0x808FCA2C
    /* lwzx r3, r3, r29 */ // 0x808FCA30
    if (==) goto 0x0x808fca4c;
    r12 = *(0 + r3); // lwz @ 0x808FCA3C
    r12 = *(0x10 + r12); // lwz @ 0x808FCA40
    /* mtctr r12 */ // 0x808FCA44
    /* bctrl  */ // 0x808FCA48
    r29 = r29 + 0x64; // 0x808FCA4C
    r30 = r30 + 1; // 0x808FCA50
    r0 = *(0x310 + r28); // lwz @ 0x808FCA54
    if (<) goto 0x0x808fca20;
    /* li r0, 1 */ // 0x808FCA60
    *(0x16d + r28) = r0; // stb @ 0x808FCA64
    r31 = *(0x1c + r1); // lwz @ 0x808FCA68
    r30 = *(0x18 + r1); // lwz @ 0x808FCA6C
    r29 = *(0x14 + r1); // lwz @ 0x808FCA70
    r28 = *(0x10 + r1); // lwz @ 0x808FCA74
    r0 = *(0x24 + r1); // lwz @ 0x808FCA78
    return;
}