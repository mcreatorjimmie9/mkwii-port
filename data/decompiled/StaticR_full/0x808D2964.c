/* Function at 0x808D2964, size=64 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808D2964(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -208(r1) */
    /* saved r26 */
    /* lis r5, 0 */ // 0x808D296C
    /* lis r4, 0 */ // 0x808D2970
    *(0xd4 + r1) = r0; // stw @ 0x808D2974
    /* li r6, 0 */ // 0x808D2978
    /* stmw r26, 0xb8(r1) */ // 0x808D297C
    r30 = r3;
    r31 = r5 + 0; // 0x808D2984
    r5 = r31 + 0x102; // 0x808D2988
    r3 = *(0 + r4); // lwz @ 0x808D298C
    /* li r4, 2 */ // 0x808D2990
    FUN_805CFD60(r5, r4); // bl 0x805CFD60
    r28 = r3;
    /* li r3, 0x20 */ // 0x808D299C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}