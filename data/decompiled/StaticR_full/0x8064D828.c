/* Function at 0x8064D828, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8064D828(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8064D830
    /* li r0, 0 */ // 0x8064D838
    *(0xc + r1) = r31; // stw @ 0x8064D83C
    /* li r31, -1 */ // 0x8064D840
    *(8 + r1) = r30; // stw @ 0x8064D844
    r30 = r3;
    *(0xa4c + r3) = r4; // stw @ 0x8064D84C
    /* li r4, 0 */ // 0x8064D850
    *(0x820 + r3) = r0; // stw @ 0x8064D854
    *(0x824 + r3) = r0; // stw @ 0x8064D858
    *(0xa50 + r3) = r31; // stw @ 0x8064D85C
    r3 = r3 + 0x1b8; // 0x8064D860
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    *(0xa54 + r30) = r31; // stw @ 0x8064D868
    r3 = r30 + 0x44; // 0x8064D86C
    /* li r4, 0 */ // 0x8064D870
    /* li r5, 0 */ // 0x8064D874
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x1b8; // 0x8064D87C
    /* li r4, 0x7d0 */ // 0x8064D880
    /* li r5, 0 */ // 0x8064D884
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x670; // 0x8064D88C
    /* li r4, 0 */ // 0x8064D890
    /* li r5, 0 */ // 0x8064D894
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x14 + r1); // lwz @ 0x8064D89C
    r31 = *(0xc + r1); // lwz @ 0x8064D8A0
    r30 = *(8 + r1); // lwz @ 0x8064D8A4
    return;
}