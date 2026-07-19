/* Function at 0x805E30C0, size=276 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 14 function(s) */

int FUN_805E30C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805E30D0
    r30 = r3;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r5 = r3;
    /* lis r31, 0 */ // 0x805E30E0
    r3 = *(0 + r31); // lwz @ 0x805E30E4
    /* li r4, 5 */ // 0x805E30E8
    r5 = *(0x18d8 + r5); // lwz @ 0x805E30EC
    /* li r6, 0 */ // 0x805E30F0
    FUN_805CEFB4(r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 5 */ // 0x805E3100
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    /* lis r3, 0 */ // 0x805E3108
    r3 = *(0 + r3); // lwz @ 0x805E310C
    FUN_80698EF4(r3, r5, r3); // bl 0x80698EF4
    if (==) goto 0x0x805e3148;
    FUN_805ABAFC(r3); // bl 0x805ABAFC
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x805E3124
    r5 = *(0x18d8 + r4); // lwz @ 0x805E3128
    /* li r4, 6 */ // 0x805E312C
    /* li r6, 0 */ // 0x805E3130
    FUN_805CEFB4(r4, r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 6 */ // 0x805E3140
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    /* lis r3, 0 */ // 0x805E3148
    r3 = *(0 + r3); // lwz @ 0x805E314C
    FUN_80698EEC(r3, r5, r3); // bl 0x80698EEC
    if (==) goto 0x0x805e318c;
    FUN_805ABAFC(r3); // bl 0x805ABAFC
    r5 = r3;
    /* lis r3, 0 */ // 0x805E3164
    r3 = *(0 + r3); // lwz @ 0x805E3168
    /* li r4, 8 */ // 0x805E316C
    r5 = *(0x18d8 + r5); // lwz @ 0x805E3170
    /* li r6, 0 */ // 0x805E3174
    FUN_805CEFB4(r3, r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 8 */ // 0x805E3184
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    FUN_805ABAFC(r4, r3, r5); // bl 0x805ABAFC
    r5 = r3;
    /* lis r3, 0 */ // 0x805E3194
    r3 = *(0 + r3); // lwz @ 0x805E3198
    /* li r4, 4 */ // 0x805E319C
    r5 = *(0x18d8 + r5); // lwz @ 0x805E31A0
    /* li r6, 0 */ // 0x805E31A4
    FUN_805CEFB4(r3, r4, r6); // bl 0x805CEFB4
    r4 = r3;
    r3 = r30;
    /* li r5, 4 */ // 0x805E31B4
    FUN_805AA684(r6, r4, r3, r5); // bl 0x805AA684
    r0 = *(0x14 + r1); // lwz @ 0x805E31BC
    r31 = *(0xc + r1); // lwz @ 0x805E31C0
    r30 = *(8 + r1); // lwz @ 0x805E31C4
    return;
}