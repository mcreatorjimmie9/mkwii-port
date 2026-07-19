/* Function at 0x806B55E4, size=216 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B55E4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r3;
    *(0x5c + r1) = r31; // stw @ 0x806B55F8
    r31 = r5;
    *(0x58 + r1) = r30; // stw @ 0x806B5600
    r30 = r4;
    r4 = r0;
    FUN_8064E324(r4); // bl 0x8064E324
    /* lis r9, 0 */ // 0x806B5610
    r8 = *(0 + r9); // lwzu @ 0x806B5614
    *(8 + r1) = r8; // stw @ 0x806B561C
    r7 = *(4 + r9); // lwz @ 0x806B5620
    r6 = *(8 + r9); // lwz @ 0x806B5624
    r5 = *(0xc + r9); // lwz @ 0x806B5628
    r4 = *(0x10 + r9); // lwz @ 0x806B562C
    r3 = *(0x14 + r9); // lwz @ 0x806B5630
    r0 = *(0x18 + r9); // lwz @ 0x806B5634
    *(0xc + r1) = r7; // stw @ 0x806B5638
    *(0x10 + r1) = r6; // stw @ 0x806B563C
    *(0x14 + r1) = r5; // stw @ 0x806B5640
    *(0x18 + r1) = r4; // stw @ 0x806B5644
    *(0x1c + r1) = r3; // stw @ 0x806B5648
    *(0x20 + r1) = r0; // stw @ 0x806B564C
    if (==) goto 0x0x806b5664;
    /* lis r3, 0 */ // 0x806B5654
    r3 = r3 + 0; // 0x806B5658
    r5 = r3 + 0x39; // 0x806B565C
    /* b 0x806b567c */ // 0x806B5660
    /* lis r3, 0 */ // 0x806B5664
    r3 = r3 + 0; // 0x806B566C
    r5 = r3 + 0x6a; // 0x806B5670
    if (==) goto 0x0x806b567c;
    r5 = r3 + 0x51; // 0x806B5678
    /* lis r6, 0 */ // 0x806B567C
    r6 = r6 + 0; // 0x806B5684
    r4 = r6 + 0x83; // 0x806B568C
    r6 = r6 + 0x89; // 0x806B5690
    FUN_8064E36C(r3, r6, r7, r4, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B569C
    FUN_8064E32C(r4, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x806B56A4
    r31 = *(0x5c + r1); // lwz @ 0x806B56A8
    r30 = *(0x58 + r1); // lwz @ 0x806B56AC
    return;
}