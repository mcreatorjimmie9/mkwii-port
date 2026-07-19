/* Function at 0x8075A98C, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8075A98C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x8075A99C
    /* li r30, 0 */ // 0x8075A9A4
    *(0x14 + r1) = r29; // stw @ 0x8075A9A8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8075A9B0
    r28 = r3;
    /* b 0x8075aa44 */ // 0x8075A9B8
    r3 = *(0xd8 + r28); // lwz @ 0x8075A9BC
    /* lwzx r3, r3, r31 */ // 0x8075A9C0
    r0 = *(0x1bd + r3); // lbz @ 0x8075A9C4
    if (!=) goto 0x0x8075aa3c;
    if (!=) goto 0x0x8075a9e0;
    /* li r3, 0 */ // 0x8075A9D8
    /* b 0x8075aa14 */ // 0x8075A9DC
    r3 = *(0x20 + r3); // lwz @ 0x8075A9E0
    r4 = *(0x20 + r29); // lwz @ 0x8075A9E4
    r0 = *(4 + r3); // lha @ 0x8075A9E8
    r4 = *(4 + r4); // lha @ 0x8075A9EC
    if (==) goto 0x0x8075aa00;
    /* li r3, 0 */ // 0x8075A9F8
    /* b 0x8075aa14 */ // 0x8075A9FC
    /* lfs f1, 0x1f4(r29) */ // 0x8075AA00
    /* lfs f2, 0x1fc(r29) */ // 0x8075AA04
    r4 = *(0x1f0 + r29); // lhz @ 0x8075AA08
    r5 = *(0x1f8 + r29); // lhz @ 0x8075AA0C
    FUN_8076D26C(); // bl 0x8076D26C
    if (==) goto 0x0x8075aa3c;
    r3 = *(0xd8 + r28); // lwz @ 0x8075AA1C
    /* lwzx r3, r3, r31 */ // 0x8075AA20
    r0 = *(0x154 + r3); // lwz @ 0x8075AA24
    if (!=) goto 0x0x8075aa38;
    FUN_8075D1B8(); // bl 0x8075D1B8
    /* b 0x8075aa3c */ // 0x8075AA34
    FUN_8075D104(); // bl 0x8075D104
    r31 = r31 + 4; // 0x8075AA3C
    r30 = r30 + 1; // 0x8075AA40
    r0 = *(0xec + r28); // lwz @ 0x8075AA44
    if (<) goto 0x0x8075a9bc;
    r0 = *(0x24 + r1); // lwz @ 0x8075AA50
    r31 = *(0x1c + r1); // lwz @ 0x8075AA54
    r30 = *(0x18 + r1); // lwz @ 0x8075AA58
    r29 = *(0x14 + r1); // lwz @ 0x8075AA5C
    r28 = *(0x10 + r1); // lwz @ 0x8075AA60
    return;
}