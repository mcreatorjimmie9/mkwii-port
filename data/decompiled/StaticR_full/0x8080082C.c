/* Function at 0x8080082C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080082C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 1 */ // 0x80800840
    *(8 + r1) = r30; // stw @ 0x80800844
    r30 = r3;
    r3 = *(0xd8 + r3); // lwz @ 0x8080084C
    r12 = *(0 + r3); // lwz @ 0x80800850
    r12 = *(0xc + r12); // lwz @ 0x80800854
    /* mtctr r12 */ // 0x80800858
    /* bctrl  */ // 0x8080085C
    r3 = *(0xfc + r30); // lwz @ 0x80800860
    /* li r4, 1 */ // 0x80800864
    r12 = *(0 + r3); // lwz @ 0x80800868
    r12 = *(0xc + r12); // lwz @ 0x8080086C
    /* mtctr r12 */ // 0x80800870
    /* bctrl  */ // 0x80800874
    r3 = r30;
    r4 = r31;
    FUN_80800674(r3, r4); // bl 0x80800674
    FUN_805F4B58(r3, r4); // bl 0x805F4B58
    r3 = *(0xd8 + r30); // lwz @ 0x80800888
    /* li r4, 0 */ // 0x8080088C
    r12 = *(0 + r3); // lwz @ 0x80800890
    r12 = *(0xc + r12); // lwz @ 0x80800894
    /* mtctr r12 */ // 0x80800898
    /* bctrl  */ // 0x8080089C
    r3 = *(0xfc + r30); // lwz @ 0x808008A0
    /* li r4, 0 */ // 0x808008A4
    r12 = *(0 + r3); // lwz @ 0x808008A8
    r12 = *(0xc + r12); // lwz @ 0x808008AC
    /* mtctr r12 */ // 0x808008B0
    /* bctrl  */ // 0x808008B4
    r0 = *(0x14 + r1); // lwz @ 0x808008B8
    r31 = *(0xc + r1); // lwz @ 0x808008BC
    r30 = *(8 + r1); // lwz @ 0x808008C0
    return;
}