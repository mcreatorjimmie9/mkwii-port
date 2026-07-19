/* Function at 0x806EC7F0, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EC7F0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806EC800
    *(8 + r1) = r30; // stw @ 0x806EC804
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x806EC80C
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806ec824;
    /* li r3, 1 */ // 0x806EC81C
    /* b 0x806ec85c */ // 0x806EC820
    r3 = *(0 + r31); // lwz @ 0x806EC824
    /* li r4, 1 */ // 0x806EC828
    r5 = *(0x3e0 + r30); // lwz @ 0x806EC82C
    r0 = *(0x291c + r3); // lwz @ 0x806EC830
    /* mulli r0, r0, 0x58 */ // 0x806EC834
    r3 = r3 + r0; // 0x806EC838
    r0 = *(0x59 + r3); // lbz @ 0x806EC83C
    r3 = *(0x48 + r3); // lwz @ 0x806EC840
    r0 = r4 << r0; // slw
    r5 = r5 | r0; // 0x806EC848
    r0 = r3 & r5; // 0x806EC84C
    /* subf r0, r3, r0 */ // 0x806EC850
    /* cntlzw r0, r0 */ // 0x806EC854
    /* srwi r3, r0, 5 */ // 0x806EC858
    r0 = *(0x14 + r1); // lwz @ 0x806EC85C
    r31 = *(0xc + r1); // lwz @ 0x806EC860
    r30 = *(8 + r1); // lwz @ 0x806EC864
    return;
}