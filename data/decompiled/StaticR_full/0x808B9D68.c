/* Function at 0x808B9D68, size=264 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808B9D68(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808B9D70
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x808B9D80
    *(0xd4 + r1) = r29; // stw @ 0x808B9D84
    r4 = *(0 + r4); // lwz @ 0x808B9D88
    r29 = *(0x240 + r5); // lwz @ 0x808B9D8C
    r0 = *(0x1760 + r4); // lwz @ 0x808B9D90
    if (!=) goto 0x0x808b9e54;
    /* lis r3, 0 */ // 0x808B9D9C
    r5 = *(0 + r3); // lwz @ 0x808B9DA0
    r0 = *(0x36 + r5); // lha @ 0x808B9DA4
    if (<) goto 0x0x808b9dcc;
    /* lis r3, 1 */ // 0x808B9DB0
    /* clrlwi r4, r0, 0x18 */ // 0x808B9DB4
    r0 = r3 + -0x6c10; // 0x808B9DB8
    r0 = r0 * r4; // 0x808B9DBC
    r3 = r5 + r0; // 0x808B9DC0
    r30 = r3 + 0x38; // 0x808B9DC4
    /* b 0x808b9dd0 */ // 0x808B9DC8
    /* li r30, 0 */ // 0x808B9DCC
    FUN_80654ECC(r3); // bl 0x80654ECC
    r3 = r30;
    r5 = r29;
    /* li r4, 0 */ // 0x808B9DE0
    FUN_805D7994(r3, r3, r5, r4); // bl 0x805D7994
    if (==) goto 0x0x808b9dfc;
    r0 = *(0x56 + r3); // lbz @ 0x808B9DF0
    if (!=) goto 0x0x808b9e08;
    /* li r0, 0x17a5 */ // 0x808B9DFC
    *(0x2c + r1) = r0; // stw @ 0x808B9E00
    /* b 0x808b9e44 */ // 0x808B9E04
    r0 = *(0x50 + r3); // lhz @ 0x808B9E08
    if (<=) goto 0x0x808b9e24;
    /* li r4, 0x63 */ // 0x808B9E14
    /* li r5, 0x3b */ // 0x808B9E18
    /* li r3, 0x3e7 */ // 0x808B9E1C
    /* b 0x808b9e30 */ // 0x808B9E20
    r5 = *(0x52 + r3); // lbz @ 0x808B9E24
    /* clrlwi r4, r0, 0x18 */ // 0x808B9E28
    r3 = *(0x54 + r3); // lhz @ 0x808B9E2C
    /* li r0, 0x17a4 */ // 0x808B9E30
    *(8 + r1) = r4; // stw @ 0x808B9E34
    *(0xc + r1) = r5; // stw @ 0x808B9E38
    *(0x10 + r1) = r3; // stw @ 0x808B9E3C
    *(0x2c + r1) = r0; // stw @ 0x808B9E40
    r3 = *(0x2bc + r31); // lwz @ 0x808B9E44
    /* li r4, 0xd22 */ // 0x808B9E4C
    FUN_808D5A00(r5, r4); // bl 0x808D5A00
    r0 = *(0xe4 + r1); // lwz @ 0x808B9E54
    r31 = *(0xdc + r1); // lwz @ 0x808B9E58
    r30 = *(0xd8 + r1); // lwz @ 0x808B9E5C
    r29 = *(0xd4 + r1); // lwz @ 0x808B9E60
    return;
}