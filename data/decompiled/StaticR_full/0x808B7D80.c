/* Function at 0x808B7D80, size=408 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_808B7D80(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808B7D9C
    *(0x10 + r1) = r28; // stw @ 0x808B7DA0
    r28 = r5;
    r0 = *(0x240 + r4); // lwz @ 0x808B7DA8
    if (!=) goto 0x0x808b7ef8;
    /* lis r29, 0 */ // 0x808B7DB4
    r3 = *(0 + r29); // lwz @ 0x808B7DB8
    r3 = *(0 + r3); // lwz @ 0x808B7DBC
    r3 = *(0 + r3); // lwz @ 0x808B7DC0
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808b7e24;
    r3 = *(0x90c + r30); // lwz @ 0x808B7DD0
    if (==) goto 0x0x808b7de8;
    r0 = *(4 + r3); // lbz @ 0x808B7DDC
    if (!=) goto 0x0x808b7ef8;
    /* lis r5, 0 */ // 0x808B7DE8
    /* li r0, -1 */ // 0x808B7DEC
    r4 = *(0 + r5); // lwz @ 0x808B7DF0
    r3 = r31;
    r4 = *(0x98 + r4); // lwz @ 0x808B7DF8
    *(0x220 + r4) = r0; // stw @ 0x808B7DFC
    r4 = *(0 + r5); // lwz @ 0x808B7E00
    r4 = *(0x98 + r4); // lwz @ 0x808B7E04
    *(0x22c + r4) = r0; // stw @ 0x808B7E08
    *(0x3e8 + r30) = r0; // stw @ 0x808B7E0C
    FUN_8064A384(); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x808B7E18
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x808b7ef8 */ // 0x808B7E20
    r3 = *(0 + r29); // lwz @ 0x808B7E24
    r3 = *(0 + r3); // lwz @ 0x808B7E28
    r3 = *(0 + r3); // lwz @ 0x808B7E2C
    FUN_808CF914(); // bl 0x808CF914
    if (==) goto 0x0x808b7e5c;
    /* li r0, -1 */ // 0x808B7E3C
    *(0x3e8 + r30) = r0; // stw @ 0x808B7E40
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x808B7E50
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808b7ef8 */ // 0x808B7E58
    r3 = *(0 + r29); // lwz @ 0x808B7E5C
    r3 = *(0 + r3); // lwz @ 0x808B7E60
    r3 = *(0 + r3); // lwz @ 0x808B7E64
    FUN_808CF934(); // bl 0x808CF934
    if (==) goto 0x0x808b7e94;
    /* lis r4, 0 */ // 0x808B7E74
    /* li r0, -1 */ // 0x808B7E78
    /* lfs f1, 0(r4) */ // 0x808B7E7C
    r3 = r30;
    *(0x3e8 + r30) = r0; // stw @ 0x808B7E84
    /* li r4, 1 */ // 0x808B7E88
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x808b7ef8 */ // 0x808B7E90
    r3 = *(0 + r29); // lwz @ 0x808B7E94
    r3 = *(0 + r3); // lwz @ 0x808B7E98
    r0 = *(0 + r3); // lwz @ 0x808B7E9C
    if (<) goto 0x0x808b7eb0;
    if (<=) goto 0x0x808b7ebc;
    if (==) goto 0x0x808b7ed0;
    /* b 0x808b7ee4 */ // 0x808B7EB8
    r3 = r30;
    r5 = r31;
    /* li r4, 0x7d */ // 0x808B7EC4
    FUN_808B40C8(r3, r5, r4); // bl 0x808B40C8
    /* b 0x808b7ef8 */ // 0x808B7ECC
    r3 = r30;
    r5 = r31;
    /* li r4, 0x82 */ // 0x808B7ED8
    FUN_808B40C8(r3, r5, r4); // bl 0x808B40C8
    /* b 0x808b7ef8 */ // 0x808B7EE0
    if (!=) goto 0x0x808b7ef8;
    r3 = r30;
    r4 = r31;
    FUN_808B3CF4(r3, r4); // bl 0x808B3CF4
    r0 = *(0x24 + r1); // lwz @ 0x808B7EF8
    r31 = *(0x1c + r1); // lwz @ 0x808B7EFC
    r30 = *(0x18 + r1); // lwz @ 0x808B7F00
    r29 = *(0x14 + r1); // lwz @ 0x808B7F04
    r28 = *(0x10 + r1); // lwz @ 0x808B7F08
    return;
}