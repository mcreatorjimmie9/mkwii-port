/* Function at 0x808ED730, size=340 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808ED730(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 1 */ // 0x808ED73C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808ED748
    *(0x14 + r1) = r29; // stw @ 0x808ED74C
    *(0xb48 + r3) = r4; // stw @ 0x808ED750
    /* lis r4, 0 */ // 0x808ED754
    *(0xb44 + r3) = r5; // stw @ 0x808ED758
    *(0xa40 + r3) = r0; // stb @ 0x808ED75C
    *(0x8b8 + r3) = r0; // stb @ 0x808ED760
    r3 = *(0 + r4); // lwz @ 0x808ED764
    r3 = *(0 + r3); // lwz @ 0x808ED768
    r29 = *(0x204 + r3); // lwz @ 0x808ED76C
    if (!=) goto 0x0x808ed780;
    /* li r29, 0 */ // 0x808ED778
    /* b 0x808ed7d4 */ // 0x808ED77C
    /* lis r30, 0 */ // 0x808ED780
    r30 = r30 + 0; // 0x808ED784
    if (==) goto 0x0x808ed7d0;
    r12 = *(0 + r29); // lwz @ 0x808ED78C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808ED794
    /* mtctr r12 */ // 0x808ED798
    /* bctrl  */ // 0x808ED79C
    /* b 0x808ed7b8 */ // 0x808ED7A0
    if (!=) goto 0x0x808ed7b4;
    /* li r0, 1 */ // 0x808ED7AC
    /* b 0x808ed7c4 */ // 0x808ED7B0
    r3 = *(0 + r3); // lwz @ 0x808ED7B4
    if (!=) goto 0x0x808ed7a4;
    /* li r0, 0 */ // 0x808ED7C0
    if (==) goto 0x0x808ed7d0;
    /* b 0x808ed7d4 */ // 0x808ED7CC
    /* li r29, 0 */ // 0x808ED7D0
    r5 = *(0xb48 + r31); // lwz @ 0x808ED7D4
    if (==) goto 0x0x808ed7f8;
    /* li r0, 0 */ // 0x808ED7E0
    *(0x8b8 + r31) = r0; // stb @ 0x808ED7E4
    r3 = r29;
    /* li r4, 0 */ // 0x808ED7EC
    FUN_806CC89C(r3, r4); // bl 0x806CC89C
    /* b 0x808ed8ac */ // 0x808ED7F4
    r3 = *(0xb44 + r31); // lwz @ 0x808ED7F8
    if (==) goto 0x0x808ed8ac;
    r0 = r3 + -9; // 0x808ED804
    /* li r4, 0 */ // 0x808ED808
    *(0xa40 + r31) = r4; // stb @ 0x808ED810
    if (>) goto 0x0x808ed874;
    /* lis r3, 0 */ // 0x808ED818
    /* slwi r0, r0, 2 */ // 0x808ED81C
    r3 = r3 + 0; // 0x808ED820
    /* lwzx r3, r3, r0 */ // 0x808ED824
    /* mtctr r3 */ // 0x808ED828
    /* bctr  */ // 0x808ED82C
    /* li r0, 6 */ // 0x808ED830
    *(0xb48 + r31) = r0; // stw @ 0x808ED834
    /* b 0x808ed87c */ // 0x808ED838
    *(0xb48 + r31) = r4; // stw @ 0x808ED83C
    /* b 0x808ed87c */ // 0x808ED840
    /* li r0, 0x10 */ // 0x808ED844
    *(0xb48 + r31) = r0; // stw @ 0x808ED848
    /* b 0x808ed87c */ // 0x808ED84C
    /* li r0, 3 */ // 0x808ED850
    *(0xb48 + r31) = r0; // stw @ 0x808ED854
    /* b 0x808ed87c */ // 0x808ED858
    /* li r0, 9 */ // 0x808ED85C
    *(0xb48 + r31) = r0; // stw @ 0x808ED860
    /* b 0x808ed87c */ // 0x808ED864
    /* li r0, 2 */ // 0x808ED868
    *(0xb48 + r31) = r0; // stw @ 0x808ED86C
    /* b 0x808ed87c */ // 0x808ED870
    /* li r0, 0 */ // 0x808ED874
    *(0xb48 + r31) = r0; // stw @ 0x808ED878
    r5 = *(0xb48 + r31); // lwz @ 0x808ED87C
    r3 = r29;
}