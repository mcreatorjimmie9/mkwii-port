/* Function at 0x805E196C, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_805E196C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805E197C
    r30 = r3;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r5 = r3;
    /* lis r31, 0 */ // 0x805E198C
    r3 = *(0 + r31); // lwz @ 0x805E1990
    /* li r4, 4 */ // 0x805E1994
    r5 = *(0x18d8 + r5); // lwz @ 0x805E1998
    /* li r6, 0 */ // 0x805E199C
    FUN_805CEFB4(r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 4 */ // 0x805E19AC
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    FUN_805ABAFC(r4, r3, r5); // bl 0x805ABAFC
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x805E19BC
    r5 = *(0x18d8 + r4); // lwz @ 0x805E19C0
    /* li r4, 5 */ // 0x805E19C4
    /* li r6, 0 */ // 0x805E19C8
    FUN_805CEFB4(r4, r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 5 */ // 0x805E19D8
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    /* lis r3, 0 */ // 0x805E19E0
    r3 = *(0 + r3); // lwz @ 0x805E19E4
    FUN_80698EF4(r3, r5, r3); // bl 0x80698EF4
    if (==) goto 0x0x805e1a20;
    FUN_805ABAFC(r3); // bl 0x805ABAFC
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x805E19FC
    r5 = *(0x18d4 + r4); // lwz @ 0x805E1A00
    /* li r4, 6 */ // 0x805E1A04
    /* li r6, 0 */ // 0x805E1A08
    FUN_805CEFB4(r4, r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 6 */ // 0x805E1A18
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    r0 = *(0x14 + r1); // lwz @ 0x805E1A20
    r31 = *(0xc + r1); // lwz @ 0x805E1A24
    r30 = *(8 + r1); // lwz @ 0x805E1A28
    return;
}