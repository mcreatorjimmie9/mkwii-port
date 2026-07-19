/* Function at 0x808E886C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E886C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x808E8878
    *(0xc + r1) = r31; // stw @ 0x808E887C
    /* lis r31, 0 */ // 0x808E8880
    *(8 + r1) = r30; // stw @ 0x808E8884
    r30 = r3;
    *(0x6bc + r3) = r0; // stw @ 0x808E888C
    *(0x6c0 + r3) = r0; // stw @ 0x808E8890
    r3 = *(0 + r31); // lwz @ 0x808E8894
    r3 = *(0 + r3); // lwz @ 0x808E8898
    FUN_80685E54(); // bl 0x80685E54
    r3 = *(0 + r31); // lwz @ 0x808E88A0
    r3 = *(0 + r3); // lwz @ 0x808E88A4
    r0 = *(0 + r3); // lwz @ 0x808E88A8
    if (!=) goto 0x0x808e88bc;
    /* li r0, 0x6c */ // 0x808E88B4
    *(0x3ec + r30) = r0; // stw @ 0x808E88B8
    r3 = r30;
    FUN_808B2D44(r3); // bl 0x808B2D44
    r0 = *(0x14 + r1); // lwz @ 0x808E88C4
    r31 = *(0xc + r1); // lwz @ 0x808E88C8
    r30 = *(8 + r1); // lwz @ 0x808E88CC
    return;
}