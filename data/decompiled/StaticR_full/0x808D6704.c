/* Function at 0x808D6704, size=84 bytes */
/* Stack frame: 48 bytes */
/* Calls: 3 function(s) */

int FUN_808D6704(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    r4 = r3;
    *(0x34 + r1) = r0; // stw @ 0x808D6710
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808D671C
    r6 = r6 + 0; // 0x808D6724
    /* li r7, 0 */ // 0x808D6728
    r4 = r6 + 0x36; // 0x808D672C
    r5 = r6 + 0x41; // 0x808D6730
    r6 = r6 + 0x4d; // 0x808D6734
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808D6740
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x34 + r1); // lwz @ 0x808D6748
    return;
}