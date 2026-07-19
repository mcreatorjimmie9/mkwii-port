/* Function at 0x8066CD7C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8066CD7C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8066CD84
    /* li r5, 0 */ // 0x8066CD88
    *(0x14 + r1) = r0; // stw @ 0x8066CD8C
    /* li r0, 0 */ // 0x8066CD90
    *(0xc + r1) = r31; // stw @ 0x8066CD94
    r31 = r3;
    *(0x1a0 + r3) = r4; // stw @ 0x8066CD9C
    /* li r4, 0 */ // 0x8066CDA0
    *(0x188 + r3) = r0; // stw @ 0x8066CDA4
    r3 = r3 + 0x1a8; // 0x8066CDA8
    FUN_808D5844(r4, r3); // bl 0x808D5844
    r3 = r31 + 0x31c; // 0x8066CDB0
    /* li r4, 0 */ // 0x8066CDB4
    /* li r5, 0 */ // 0x8066CDB8
    FUN_806A0A34(r3, r3, r4, r5); // bl 0x806A0A34
    /* li r0, -1 */ // 0x8066CDC0
    *(0x604 + r31) = r0; // stw @ 0x8066CDC4
    r31 = *(0xc + r1); // lwz @ 0x8066CDC8
    r0 = *(0x14 + r1); // lwz @ 0x8066CDCC
    return;
}