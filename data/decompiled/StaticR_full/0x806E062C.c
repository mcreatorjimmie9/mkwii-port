/* Function at 0x806E062C, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806E062C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E0638
    r31 = r3;
    r0 = *(0x1c8 + r3); // lbz @ 0x806E0640
    if (!=) goto 0x0x806e0664;
    /* lis r3, 0 */ // 0x806E064C
    /* li r4, 0 */ // 0x806E0650
    r3 = *(0 + r3); // lwz @ 0x806E0654
    r3 = r3 + 0x34; // 0x806E0658
    FUN_8067F430(r3, r4, r3); // bl 0x8067F430
    *(0x1c8 + r31) = r3; // stb @ 0x806E0660
    /* lis r3, 0 */ // 0x806E0664
    r3 = *(0 + r3); // lwz @ 0x806E0668
    r0 = *(0x30 + r3); // lwz @ 0x806E066C
    if (!=) goto 0x0x806e06d0;
    r0 = *(0x1c8 + r31); // lbz @ 0x806E0678
    if (==) goto 0x0x806e06d0;
    r4 = *(0 + r3); // lwz @ 0x806E0684
    r0 = *(0 + r4); // lwz @ 0x806E0688
    if (==) goto 0x0x806e06a0;
    if (==) goto 0x0x806e06b0;
    /* b 0x806e06bc */ // 0x806E069C
    /* li r4, 0x10 */ // 0x806E06A0
    /* li r5, 0 */ // 0x806E06A4
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* b 0x806e06bc */ // 0x806E06AC
    /* li r4, 0x13 */ // 0x806E06B0
    /* li r5, 0 */ // 0x806E06B4
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x806E06BC
    /* li r4, 0 */ // 0x806E06C0
    r3 = *(0 + r3); // lwz @ 0x806E06C4
    /* li r5, 0xff */ // 0x806E06C8
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806E06D0
    r31 = *(0xc + r1); // lwz @ 0x806E06D4
    return;
}