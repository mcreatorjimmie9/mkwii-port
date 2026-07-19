/* Function at 0x808E8968, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808E8968(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r3 + 0x934; // 0x808E8970
    /* li r6, 0 */ // 0x808E8974
    *(0x14 + r1) = r0; // stw @ 0x808E8978
    *(0xc + r1) = r31; // stw @ 0x808E897C
    r31 = r3;
    r4 = *(0x654 + r3); // lwz @ 0x808E8984
    r0 = r4 + 1; // 0x808E8988
    *(0x654 + r3) = r0; // stw @ 0x808E898C
    FUN_80671C2C(); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x808E8994
    r3 = r31 + 0x934; // 0x808E8998
    r6 = r6 + 0; // 0x808E899C
    r4 = r6 + 0x1b; // 0x808E89A0
    r5 = r6 + 0x2a; // 0x808E89A4
    r6 = r6 + 0x3c; // 0x808E89A8
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    r3 = r31 + 0x934; // 0x808E89B0
    /* li r4, 0 */ // 0x808E89B4
    /* li r5, 0 */ // 0x808E89B8
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x934; // 0x808E89C0
    r31 = *(0xc + r1); // lwz @ 0x808E89C4
    r0 = *(0x14 + r1); // lwz @ 0x808E89C8
    return;
}