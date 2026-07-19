/* Function at 0x80656388, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80656388(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x8065639C
    r29 = r3;
    r0 = *(0x14 + r3); // lwz @ 0x806563A4
    if (>) goto 0x0x806563bc;
    r0 = *(0x18 + r3); // lwz @ 0x806563B0
    if (<=) goto 0x0x8065643c;
    r3 = *(0 + r3); // lwz @ 0x806563BC
    /* li r4, -1 */ // 0x806563C0
    /* li r0, 0 */ // 0x806563C4
    *(8 + r1) = r3; // stw @ 0x806563C8
    *(0x10 + r1) = r4; // stw @ 0x806563D0
    *(0x14 + r1) = r0; // stw @ 0x806563D4
    FUN_8065683C(r3); // bl 0x8065683C
    /* li r30, 0 */ // 0x806563DC
    /* li r31, 0 */ // 0x806563E0
    /* b 0x80656400 */ // 0x806563E4
    r0 = *(4 + r29); // lwz @ 0x806563E8
    r4 = r0 + r31; // 0x806563F0
    FUN_80656B18(r3); // bl 0x80656B18
    r31 = r31 + 0x18; // 0x806563F8
    r30 = r30 + 1; // 0x806563FC
    r0 = *(0x14 + r29); // lwz @ 0x80656400
    if (<) goto 0x0x806563e8;
    /* li r30, 0 */ // 0x8065640C
    /* li r31, 0 */ // 0x80656410
    /* b 0x80656430 */ // 0x80656414
    r0 = *(0xc + r29); // lwz @ 0x80656418
    r4 = r0 + r31; // 0x80656420
    FUN_80656C00(r3); // bl 0x80656C00
    r31 = r31 + 0x44; // 0x80656428
    r30 = r30 + 1; // 0x8065642C
    r0 = *(0x18 + r29); // lwz @ 0x80656430
    if (<) goto 0x0x80656418;
    r0 = *(0x34 + r1); // lwz @ 0x8065643C
    r31 = *(0x2c + r1); // lwz @ 0x80656440
    r30 = *(0x28 + r1); // lwz @ 0x80656444
    r29 = *(0x24 + r1); // lwz @ 0x80656448
    return;
}