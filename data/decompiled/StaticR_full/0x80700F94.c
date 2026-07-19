/* Function at 0x80700F94, size=316 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80700F94(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80700FA0
    r31 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x80700FA8
    r7 = *(0x58 + r3); // lwz @ 0x80700FAC
    /* subf r8, r4, r7 */ // 0x80700FB4
    if (!=) goto 0x0x80700ff4;
    /* addis r4, r3, 1 */ // 0x80700FBC
    r0 = *(-0x7500 + r4); // lwz @ 0x80700FC0
    if (>) goto 0x0x80700ff4;
    r0 = *(0x55 + r3); // lbz @ 0x80700FCC
    if (==) goto 0x0x80700fe4;
    if (==) goto 0x0x80700fec;
    /* b 0x80700ff4 */ // 0x80700FE0
    /* li r0, 1 */ // 0x80700FE4
    /* b 0x80700ff8 */ // 0x80700FE8
    /* li r0, 2 */ // 0x80700FEC
    /* b 0x80700ff8 */ // 0x80700FF0
    /* li r0, 3 */ // 0x80700FF4
    if (==) goto 0x0x80701004;
    r8 = r8 + -1; // 0x80701000
    if (<) goto 0x0x80701014;
    if (<) goto 0x0x8070102c;
    /* li r4, -0x2855 */ // 0x80701014
    /* li r0, 3 */ // 0x80701018
    *(0x18 + r3) = r4; // stw @ 0x8070101C
    *(0x14 + r3) = r0; // stw @ 0x80701020
    /* li r3, 0 */ // 0x80701024
    /* b 0x807010bc */ // 0x80701028
    if (!=) goto 0x0x80701044;
    /* slwi r0, r8, 2 */ // 0x80701034
    r4 = r3 + r0; // 0x80701038
    r4 = *(0x68 + r4); // lwz @ 0x8070103C
    /* b 0x80701050 */ // 0x80701040
    /* slwi r0, r8, 2 */ // 0x80701044
    r4 = r3 + r0; // 0x80701048
    r4 = *(0x90 + r4); // lwz @ 0x8070104C
    if (!=) goto 0x0x80701070;
    /* li r4, -0x2853 */ // 0x80701058
    /* li r0, 3 */ // 0x8070105C
    *(0x18 + r3) = r4; // stw @ 0x80701060
    *(0x14 + r3) = r0; // stw @ 0x80701064
    /* li r3, 0 */ // 0x80701068
    /* b 0x807010bc */ // 0x8070106C
    /* lis r3, 0 */ // 0x80701070
    r5 = r6;
    r3 = *(0 + r3); // lwz @ 0x80701078
    FUN_80704248(r3, r3, r5); // bl 0x80704248
    if (==) goto 0x0x807010b0;
    /* li r5, 0 */ // 0x80701088
    /* li r4, 1 */ // 0x8070108C
    /* li r0, 0x16 */ // 0x80701090
    *(0x14 + r31) = r5; // stw @ 0x80701094
    /* li r3, 1 */ // 0x80701098
    *(0x10 + r31) = r4; // stw @ 0x8070109C
    *(0x7578 + r31) = r0; // stw @ 0x807010A0
    *(0x28 + r31) = r5; // stb @ 0x807010A4
    *(0x18 + r31) = r5; // stw @ 0x807010A8
    /* b 0x807010bc */ // 0x807010AC
    r3 = r31;
    FUN_80701E68(r3); // bl 0x80701E68
    /* li r3, 0 */ // 0x807010B8
    r0 = *(0x14 + r1); // lwz @ 0x807010BC
    r31 = *(0xc + r1); // lwz @ 0x807010C0
    return;
}