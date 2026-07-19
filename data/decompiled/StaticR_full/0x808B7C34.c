/* Function at 0x808B7C34, size=332 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 10 function(s) */

int FUN_808B7C34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    r30 = r3;
    r3 = r31;
    *(0xd4 + r1) = r29; // stw @ 0x808B7C54
    *(0xd0 + r1) = r28; // stw @ 0x808B7C58
    r28 = r6;
    FUN_805B7218(r3); // bl 0x805B7218
    if (==) goto 0x0x808b7cac;
    r0 = r31 + -0x1a; // 0x808B7C6C
    /* li r29, 0 */ // 0x808B7C70
    if (<=) goto 0x0x808b7c94;
    r0 = r31 + -0x20; // 0x808B7C7C
    if (<=) goto 0x0x808b7c94;
    r0 = r31 + -0x26; // 0x808B7C88
    if (>) goto 0x0x808b7c98;
    /* li r29, 2 */ // 0x808B7C94
    r3 = *(0x44 + r30); // lwz @ 0x808B7C98
    r4 = r28;
    FUN_8066E0EC(r4); // bl 0x8066E0EC
    FUN_808E286C(r4); // bl 0x808E286C
    r31 = r29 + r3; // 0x808B7CA8
    r0 = *(8 + r30); // lwz @ 0x808B7CAC
    if (==) goto 0x0x808b7d60;
    r3 = r31;
    FUN_805B7218(r3); // bl 0x805B7218
    if (==) goto 0x0x808b7d18;
    /* slwi r29, r28, 2 */ // 0x808B7CC8
    r3 = r30 + r29; // 0x808B7CCC
    r0 = *(0x35c + r3); // lwz @ 0x808B7CD0
    if (==) goto 0x0x808b7d18;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r4 = r30 + r29; // 0x808B7CE4
    r3 = r31;
    r0 = *(0x8f4 + r4); // lwz @ 0x808B7CEC
    /* li r4, 1 */ // 0x808B7CF0
    *(0x50 + r1) = r0; // stw @ 0x808B7CF4
    FUN_808AF914(r3, r4); // bl 0x808AF914
    /* mulli r0, r28, 0x178 */ // 0x808B7CFC
    r6 = *(0x910 + r30); // lwz @ 0x808B7D00
    r4 = r3;
    r3 = r6 + r0; // 0x808B7D0C
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    /* b 0x808b7d3c */ // 0x808B7D14
    r3 = r31;
    /* li r4, 0 */ // 0x808B7D1C
    FUN_808AF914(r3, r4); // bl 0x808AF914
    /* mulli r0, r28, 0x178 */ // 0x808B7D24
    r6 = *(0x910 + r30); // lwz @ 0x808B7D28
    r4 = r3;
    /* li r5, 0 */ // 0x808B7D30
    r3 = r6 + r0; // 0x808B7D34
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    /* mulli r29, r28, 0x188 */ // 0x808B7D3C
    r0 = *(0x914 + r30); // lwz @ 0x808B7D40
    r4 = r31;
    r3 = r0 + r29; // 0x808B7D48
    FUN_806CA650(r4); // bl 0x806CA650
    r0 = *(0x914 + r30); // lwz @ 0x808B7D50
    /* li r4, 0 */ // 0x808B7D54
    r3 = r0 + r29; // 0x808B7D58
    *(0x80 + r3) = r4; // stb @ 0x808B7D5C
    r0 = *(0xe4 + r1); // lwz @ 0x808B7D60
    r31 = *(0xdc + r1); // lwz @ 0x808B7D64
    r30 = *(0xd8 + r1); // lwz @ 0x808B7D68
    r29 = *(0xd4 + r1); // lwz @ 0x808B7D6C
    r28 = *(0xd0 + r1); // lwz @ 0x808B7D70
    return;
}