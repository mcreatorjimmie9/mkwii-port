/* Function at 0x806F2DC8, size=1444 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r14 */
/* Calls: 30 function(s) */

int FUN_806F2DC8(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r14 */
    /* lis r0, 0 */ // 0x806F2DD4
    r4 = r0;
    /* stmw r14, 0x48(r1) */ // 0x806F2DDC
    /* li r25, 0 */ // 0x806F2DE0
    /* lis r31, 0 */ // 0x806F2DE4
    r15 = r3;
    *(0x38 + r1) = r0; // stw @ 0x806F2DEC
    r4 = r4 + 0; // 0x806F2DF0
    /* li r0, 0 */ // 0x806F2DF4
    r24 = r15;
    *(0x38 + r1) = r4; // stw @ 0x806F2DFC
    r31 = r31 + 0; // 0x806F2E00
    /* li r26, 0 */ // 0x806F2E04
    /* li r20, 0 */ // 0x806F2E08
    *(0x3c + r1) = r0; // stw @ 0x806F2E0C
    /* lis r30, 0 */ // 0x806F2E10
    /* lis r27, 0 */ // 0x806F2E14
    /* lis r28, 0 */ // 0x806F2E18
    /* lis r14, 0 */ // 0x806F2E1C
    *(0x70 + r3) = r25; // stw @ 0x806F2E20
    *(0x74 + r3) = r25; // stw @ 0x806F2E24
    *(0x78 + r3) = r25; // stw @ 0x806F2E28
    *(0x7c + r3) = r25; // stw @ 0x806F2E2C
    *(0x80 + r3) = r25; // stw @ 0x806F2E30
    *(0x84 + r3) = r25; // stw @ 0x806F2E34
    *(0x88 + r3) = r25; // stw @ 0x806F2E38
    *(0x8c + r3) = r25; // stw @ 0x806F2E3C
    *(0x90 + r3) = r25; // stw @ 0x806F2E40
    *(0x94 + r3) = r25; // stw @ 0x806F2E44
    *(0x98 + r3) = r25; // stw @ 0x806F2E48
    *(0x9c + r3) = r25; // stw @ 0x806F2E4C
    /* lis r3, 0 */ // 0x806F2E50
    r4 = r20;
    r0 = *(0 + r3); // lwz @ 0x806F2E58
    /* lis r3, 0 */ // 0x806F2E5C
    r3 = *(0 + r3); // lwz @ 0x806F2E60
    /* li r18, 0 */ // 0x806F2E64
    r5 = r0 + r25; // 0x806F2E68
    /* li r21, 0 */ // 0x806F2E6C
    r17 = *(0x5c + r5); // lwz @ 0x806F2E70
    /* li r5, 0 */ // 0x806F2E74
    FUN_808409C0(r5); // bl 0x808409C0
    r19 = r3;
    r16 = r15;
    /* li r22, 0 */ // 0x806F2E84
    /* b 0x806f31f8 */ // 0x806F2E88
    r3 = *(0 + r30); // lwz @ 0x806F2E8C
    r4 = r22;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f2ebc;
    r3 = *(0 + r30); // lwz @ 0x806F2EA0
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2EAC
    r3 = r15 + r0; // 0x806F2EB0
    r0 = *(1 + r3); // lbz @ 0x806F2EB4
    /* b 0x806f2edc */ // 0x806F2EB8
    r3 = *(0 + r30); // lwz @ 0x806F2EBC
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2ed8;
    r0 = *(0x11 + r16); // lbz @ 0x806F2ED0
    /* b 0x806f2edc */ // 0x806F2ED4
    /* li r0, 0x14 */ // 0x806F2ED8
    if (==) goto 0x0x806f3034;
    r3 = *(0 + r30); // lwz @ 0x806F2EE4
    r4 = r22;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f2f14;
    r3 = *(0 + r30); // lwz @ 0x806F2EF8
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2F04
    r3 = r15 + r0; // 0x806F2F08
    r0 = *(1 + r3); // lbz @ 0x806F2F0C
    /* b 0x806f2f34 */ // 0x806F2F10
    r3 = *(0 + r30); // lwz @ 0x806F2F14
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2f30;
    r0 = *(0x11 + r16); // lbz @ 0x806F2F28
    /* b 0x806f2f34 */ // 0x806F2F2C
    /* li r0, 0x14 */ // 0x806F2F30
    /* mulli r0, r0, 0x1c */ // 0x806F2F34
    r3 = r31 + r0; // 0x806F2F38
    r0 = *(4 + r3); // lwz @ 0x806F2F3C
    if (!=) goto 0x0x806f3034;
    r3 = *(0 + r30); // lwz @ 0x806F2F48
    r4 = r22;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f2f78;
    r3 = *(0 + r30); // lwz @ 0x806F2F5C
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2F68
    r3 = r15 + r0; // 0x806F2F6C
    r0 = *(3 + r3); // lbz @ 0x806F2F70
    /* b 0x806f2f98 */ // 0x806F2F74
    r3 = *(0 + r30); // lwz @ 0x806F2F78
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2f94;
    r0 = *(0x13 + r16); // lbz @ 0x806F2F8C
    /* b 0x806f2f98 */ // 0x806F2F90
    /* li r0, 0 */ // 0x806F2F94
    if (==) goto 0x0x806f2fbc;
    if (==) goto 0x0x806f3020;
    if (==) goto 0x0x806f3028;
    if (==) goto 0x0x806f3030;
    /* b 0x806f3034 */ // 0x806F2FB8
    r3 = *(0 + r30); // lwz @ 0x806F2FBC
    r4 = r22;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f2fec;
    r3 = *(0 + r30); // lwz @ 0x806F2FD0
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2FDC
    r3 = r15 + r0; // 0x806F2FE0
    r0 = *(1 + r3); // lbz @ 0x806F2FE4
    /* b 0x806f300c */ // 0x806F2FE8
    r3 = *(0 + r30); // lwz @ 0x806F2FEC
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3008;
    r0 = *(0x11 + r16); // lbz @ 0x806F3000
    /* b 0x806f300c */ // 0x806F3004
    /* li r0, 0x14 */ // 0x806F3008
    /* mulli r0, r0, 0x1c */ // 0x806F300C
    r3 = r31 + r0; // 0x806F3010
    r0 = *(8 + r3); // lwz @ 0x806F3014
    r18 = r18 + r0; // 0x806F3018
    /* b 0x806f3034 */ // 0x806F301C
    /* b 0x806f3034 */ // 0x806F3024
    /* b 0x806f3034 */ // 0x806F302C
    r3 = *(0 + r27); // lwz @ 0x806F3034
    /* li r4, 0 */ // 0x806F3038
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f305c;
    r3 = *(0 + r27); // lwz @ 0x806F3048
    /* li r4, 1 */ // 0x806F304C
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f3078;
    r3 = *(0 + r30); // lwz @ 0x806F305C
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3068
    r3 = r15 + r0; // 0x806F306C
    r0 = *(2 + r3); // lbz @ 0x806F3070
    /* b 0x806f3098 */ // 0x806F3074
    r3 = *(0 + r30); // lwz @ 0x806F3078
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3094;
    r0 = *(0x12 + r16); // lbz @ 0x806F308C
    /* b 0x806f3098 */ // 0x806F3090
    /* li r0, 0x14 */ // 0x806F3094
    if (==) goto 0x0x806f31c4;
    r3 = *(0 + r27); // lwz @ 0x806F30A0
    /* li r4, 0 */ // 0x806F30A4
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f30c8;
    r3 = *(0 + r27); // lwz @ 0x806F30B4
    /* li r4, 1 */ // 0x806F30B8
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f30e4;
    r3 = *(0 + r30); // lwz @ 0x806F30C8
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F30D4
    r3 = r15 + r0; // 0x806F30D8
    r0 = *(2 + r3); // lbz @ 0x806F30DC
    /* b 0x806f3104 */ // 0x806F30E0
    r3 = *(0 + r30); // lwz @ 0x806F30E4
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3100;
    r0 = *(0x12 + r16); // lbz @ 0x806F30F8
    /* b 0x806f3104 */ // 0x806F30FC
    /* li r0, 0x14 */ // 0x806F3100
    /* mulli r0, r0, 0x1c */ // 0x806F3104
    r3 = r31 + r0; // 0x806F3108
    r0 = *(4 + r3); // lwz @ 0x806F310C
    if (!=) goto 0x0x806f31c4;
    r3 = *(0 + r27); // lwz @ 0x806F3118
    /* li r4, 0 */ // 0x806F311C
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f3140;
    r3 = *(0 + r27); // lwz @ 0x806F312C
    /* li r4, 1 */ // 0x806F3130
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f315c;
    r3 = *(0 + r30); // lwz @ 0x806F3140
    r4 = r22;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F314C
    r3 = r15 + r0; // 0x806F3150
    r0 = *(4 + r3); // lbz @ 0x806F3154
    /* b 0x806f317c */ // 0x806F3158
    r3 = *(0 + r30); // lwz @ 0x806F315C
    r4 = r22;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f3178;
    r0 = *(0x14 + r16); // lbz @ 0x806F3170
    /* b 0x806f317c */ // 0x806F3174
    /* li r0, 0 */ // 0x806F3178
    if (==) goto 0x0x806f31b0;
    if (==) goto 0x0x806f31b0;
    if (==) goto 0x0x806f31b8;
    if (==) goto 0x0x806f31b8;
    if (==) goto 0x0x806f31c0;
    if (==) goto 0x0x806f31c0;
    /* b 0x806f31c4 */ // 0x806F31AC
    r21 = r21 + 3; // 0x806F31B0
    /* b 0x806f31c4 */ // 0x806F31B4
    r21 = r21 + 2; // 0x806F31B8
    /* b 0x806f31c4 */ // 0x806F31BC
    r21 = r21 + 1; // 0x806F31C0
    if (!=) goto 0x0x806f31f0;
    r3 = *(0 + r28); // lwz @ 0x806F31CC
    r4 = r22;
    FUN_8061D97C(r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x806F31D8
    r3 = *(4 + r3); // lwz @ 0x806F31DC
    r0 = *(0xc + r3); // lwz @ 0x806F31E0
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x806F31E4
    if (==) goto 0x0x806f31f0;
    /* li r19, 1 */ // 0x806F31EC
    r22 = r22 + 1; // 0x806F31F4
    r3 = *(0 + r14); // lwz @ 0x806F31F8
    r0 = *(0x24 + r3); // lbz @ 0x806F31FC
    if (<) goto 0x0x806f2e8c;
    *(0xd0 + r24) = r18; // stw @ 0x806F3208
    r3 = r15;
    r4 = r20;
    *(0xd4 + r24) = r21; // stw @ 0x806F3218
    *(8 + r1) = r26; // stw @ 0x806F321C
    *(0xc + r1) = r26; // stw @ 0x806F3220
    *(0x10 + r1) = r26; // stw @ 0x806F3224
    *(0x14 + r1) = r26; // stw @ 0x806F3228
    *(0x18 + r1) = r26; // stw @ 0x806F322C
    *(0x1c + r1) = r26; // stw @ 0x806F3230
    *(0x20 + r1) = r26; // stw @ 0x806F3234
    *(0x24 + r1) = r26; // stw @ 0x806F3238
    *(0x28 + r1) = r26; // stw @ 0x806F323C
    *(0x2c + r1) = r26; // stw @ 0x806F3240
    *(0x30 + r1) = r26; // stw @ 0x806F3244
    *(0x34 + r1) = r26; // stw @ 0x806F3248
    FUN_806F4404(); // bl 0x806F4404
    r29 = r3;
    r3 = *(0x38 + r1); // lwz @ 0x806F3254
    r4 = r21 + r17; // 0x806F3258
    r0 = *(0x3c + r1); // lwz @ 0x806F325C
    r21 = r18 + r4; // 0x806F3260
    r22 = r3 + r0; // 0x806F3268
    /* li r18, 0 */ // 0x806F326C
    /* li r17, 0 */ // 0x806F3270
    /* b 0x806f332c */ // 0x806F3274
    r16 = *(0 + r23); // lwz @ 0x806F3278
    r3 = *(0 + r30); // lwz @ 0x806F327C
    r4 = r16;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f32ac;
    r3 = *(0 + r30); // lwz @ 0x806F3290
    r4 = r16;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F329C
    r3 = r15 + r0; // 0x806F32A0
    r0 = *(1 + r3); // lbz @ 0x806F32A4
    /* b 0x806f32d4 */ // 0x806F32A8
    r3 = *(0 + r30); // lwz @ 0x806F32AC
    r4 = r16;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f32d0;
    /* slwi r0, r16, 3 */ // 0x806F32C0
    r3 = r15 + r0; // 0x806F32C4
    r0 = *(0x11 + r3); // lbz @ 0x806F32C8
    /* b 0x806f32d4 */ // 0x806F32CC
    /* li r0, 0x14 */ // 0x806F32D0
    /* mulli r0, r0, 0x1c */ // 0x806F32D4
    r3 = r31 + r0; // 0x806F32DC
    r4 = *(8 + r3); // lwz @ 0x806F32E0
    if (!=) goto 0x0x806f3314;
    r3 = r4 + r18; // 0x806F32E8
    r0 = *(4 + r22); // lwz @ 0x806F32EC
    r3 = r21 + r3; // 0x806F32F0
    if (>) goto 0x0x806f3314;
    /* slwi r0, r16, 2 */ // 0x806F32FC
    r18 = r18 + r4; // 0x806F3300
    r3 = r15 + r0; // 0x806F3304
    /* li r0, 1 */ // 0x806F3308
    *(0x70 + r3) = r0; // stw @ 0x806F330C
    /* b 0x806f3324 */ // 0x806F3310
    /* slwi r0, r16, 2 */ // 0x806F3314
    r3 = r15 + r0; // 0x806F3318
    /* li r0, 2 */ // 0x806F331C
    *(0x70 + r3) = r0; // stw @ 0x806F3320
    r23 = r23 + 4; // 0x806F3324
    if (<) goto 0x0x806f3278;
    r20 = r20 + 1; // 0x806F3334
    r3 = *(0x3c + r1); // lwz @ 0x806F3338
    *(0xd8 + r24) = r18; // stw @ 0x806F3340
    r3 = r3 + 0x74; // 0x806F3344
    r24 = r24 + 0xc; // 0x806F3348
    *(0x3c + r1) = r3; // stw @ 0x806F334C
    r25 = r25 + 0x24; // 0x806F3350
    if (<) goto 0x0x806f2e50;
    r0 = *(0x94 + r1); // lwz @ 0x806F335C
    return;
}