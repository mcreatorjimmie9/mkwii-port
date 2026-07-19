/* Function at 0x805E2288, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805E2288(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805E2290
    *(0xc + r1) = r31; // stw @ 0x805E2298
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805E22A0
    r3 = *(0 + r4); // lwz @ 0x805E22A4
    /* li r4, 0 */ // 0x805E22A8
    r0 = *(0x25 + r3); // lbz @ 0x805E22AC
    if (<=) goto 0x0x805e22c0;
    /* li r4, 1 */ // 0x805E22B8
    /* b 0x805e22ec */ // 0x805E22BC
    if (!=) goto 0x0x805e22ec;
    r0 = *(0xb70 + r3); // lwz @ 0x805E22C4
    /* li r3, 0 */ // 0x805E22C8
    if (<) goto 0x0x805e22e0;
    if (>) goto 0x0x805e22e0;
    /* li r3, 1 */ // 0x805E22DC
    if (==) goto 0x0x805e22ec;
    /* li r4, 1 */ // 0x805E22E8
    r3 = r31;
    FUN_805AABB0(r3, r4, r3); // bl 0x805AABB0
    FUN_805ABAFC(r4, r3); // bl 0x805ABAFC
    /* li r4, 8 */ // 0x805E22F8
    r3 = r3 + 0xc94; // 0x805E22FC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
}