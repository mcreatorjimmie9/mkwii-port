/* Function at 0x80653FB0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80653FB0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, -1 */ // 0x80653FB8
    *(0x14 + r1) = r0; // stw @ 0x80653FBC
    *(0xc + r1) = r31; // stw @ 0x80653FC0
    r31 = r3;
    r5 = r31 + 0x1e4; // 0x80653FC8
    r3 = *(0x220 + r3); // lwz @ 0x80653FCC
    FUN_8066A36C(r5); // bl 0x8066A36C
    r3 = r31 + 0x98; // 0x80653FD4
    /* li r4, 1 */ // 0x80653FD8
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80653FE0
    /* li r4, 2 */ // 0x80653FE4
    /* lfs f1, 0(r5) */ // 0x80653FE8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80653FF0
    r31 = *(0xc + r1); // lwz @ 0x80653FF4
    return;
}