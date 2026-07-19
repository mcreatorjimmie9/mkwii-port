/* Function at 0x808B99D8, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808B99D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808B99E8
    *(8 + r1) = r30; // stw @ 0x808B99EC
    r30 = r3;
    if (!=) goto 0x0x808b9a20;
    r4 = *(0x654 + r3); // lwz @ 0x808B99F8
    r5 = r3 + 0x6c8; // 0x808B99FC
    /* li r6, 0 */ // 0x808B9A00
    r0 = r4 + 1; // 0x808B9A04
    *(0x654 + r3) = r0; // stw @ 0x808B9A08
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r30 + 0x6c8; // 0x808B9A10
    FUN_8087245C(r6, r3); // bl 0x8087245C
    r3 = r30 + 0x6c8; // 0x808B9A18
    /* b 0x808b9ac8 */ // 0x808B9A1C
    if (!=) goto 0x0x808b9a58;
    r4 = *(0x654 + r3); // lwz @ 0x808B9A28
    r5 = r3 + 0x149c; // 0x808B9A2C
    /* li r6, 0 */ // 0x808B9A30
    r0 = r4 + 1; // 0x808B9A34
    *(0x654 + r3) = r0; // stw @ 0x808B9A38
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r30 + 0x149c; // 0x808B9A40
    /* li r4, 1 */ // 0x808B9A44
    /* li r5, 0 */ // 0x808B9A48
    FUN_80872F8C(r3, r4, r5); // bl 0x80872F8C
    r3 = r30 + 0x149c; // 0x808B9A50
    /* b 0x808b9ac8 */ // 0x808B9A54
    if (!=) goto 0x0x808b9ac4;
    /* li r3, 0x174 */ // 0x808B9A60
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808b9a7c;
    FUN_8066D278(r3); // bl 0x8066D278
    r31 = r3;
    r4 = *(0x654 + r30); // lwz @ 0x808B9A7C
    r3 = r30;
}