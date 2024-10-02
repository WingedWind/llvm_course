; ModuleID = 'app.c'
source_filename = "app.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: noreturn nounwind uwtable
define dso_local void @app() local_unnamed_addr #0 {
  %1 = alloca [100 x i32], align 16
  %2 = alloca [100 x i32], align 16
  %3 = alloca [100 x i32], align 16
  %4 = alloca [100 x i32], align 16
  %5 = bitcast [100 x i32]* %1 to i8*
  call void @llvm.lifetime.start.p0i8(i64 400, i8* nonnull %5) #3
  %6 = bitcast [100 x i32]* %2 to i8*
  call void @llvm.lifetime.start.p0i8(i64 400, i8* nonnull %6) #3
  %7 = bitcast [100 x i32]* %3 to i8*
  call void @llvm.lifetime.start.p0i8(i64 400, i8* nonnull %7) #3
  %8 = bitcast [100 x i32]* %4 to i8*
  call void @llvm.lifetime.start.p0i8(i64 400, i8* nonnull %8) #3
  br label %9

9:                                                ; preds = %9, %0
  %10 = phi i64 [ 0, %0 ], [ %25, %9 ]
  %11 = tail call i32 (...) @simRand() #3
  %12 = srem i32 %11, 512
  %13 = getelementptr inbounds [100 x i32], [100 x i32]* %1, i64 0, i64 %10
  store i32 %12, i32* %13, align 4, !tbaa !2
  %14 = tail call i32 (...) @simRand() #3
  %15 = srem i32 %14, 256
  %16 = getelementptr inbounds [100 x i32], [100 x i32]* %2, i64 0, i64 %10
  store i32 %15, i32* %16, align 4, !tbaa !2
  %17 = tail call i32 (...) @simRand() #3
  %18 = srem i32 %17, 5
  %19 = add nsw i32 %18, 1
  %20 = getelementptr inbounds [100 x i32], [100 x i32]* %3, i64 0, i64 %10
  store i32 %19, i32* %20, align 4, !tbaa !2
  %21 = tail call i32 (...) @simRand() #3
  %22 = srem i32 %21, 16777215
  %23 = add nsw i32 %22, -16777216
  %24 = getelementptr inbounds [100 x i32], [100 x i32]* %4, i64 0, i64 %10
  store i32 %23, i32* %24, align 4, !tbaa !2
  %25 = add nuw nsw i64 %10, 1
  %26 = icmp eq i64 %25, 100
  br i1 %26, label %28, label %9

27:                                               ; preds = %61
  tail call void (...) @simFlush() #3
  tail call void (...) @simClear() #3
  br label %64

28:                                               ; preds = %9, %64
  %29 = phi i64 [ %65, %64 ], [ 0, %9 ]
  %30 = getelementptr inbounds [100 x i32], [100 x i32]* %2, i64 0, i64 %29
  %31 = load i32, i32* %30, align 4, !tbaa !2
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %30, align 4, !tbaa !2
  %33 = icmp sgt i32 %31, 255
  br i1 %33, label %37, label %34

34:                                               ; preds = %28
  %35 = getelementptr inbounds [100 x i32], [100 x i32]* %3, i64 0, i64 %29
  %36 = load i32, i32* %35, align 4, !tbaa !2
  br label %49

37:                                               ; preds = %28
  store i32 0, i32* %30, align 4, !tbaa !2
  %38 = tail call i32 (...) @simRand() #3
  %39 = srem i32 %38, 512
  %40 = getelementptr inbounds [100 x i32], [100 x i32]* %1, i64 0, i64 %29
  store i32 %39, i32* %40, align 4, !tbaa !2
  %41 = tail call i32 (...) @simRand() #3
  %42 = srem i32 %41, 5
  %43 = add nsw i32 %42, 1
  %44 = getelementptr inbounds [100 x i32], [100 x i32]* %3, i64 0, i64 %29
  store i32 %43, i32* %44, align 4, !tbaa !2
  %45 = tail call i32 (...) @simRand() #3
  %46 = srem i32 %45, 16777215
  %47 = add nsw i32 %46, -16777216
  %48 = getelementptr inbounds [100 x i32], [100 x i32]* %4, i64 0, i64 %29
  store i32 %47, i32* %48, align 4, !tbaa !2
  br label %49

49:                                               ; preds = %34, %37
  %50 = phi i32 [ %32, %34 ], [ 0, %37 ]
  %51 = phi i32 [ %36, %34 ], [ %43, %37 ]
  %52 = icmp sgt i32 %51, 0
  br i1 %52, label %53, label %61

53:                                               ; preds = %49
  %54 = getelementptr inbounds [100 x i32], [100 x i32]* %1, i64 0, i64 %29
  %55 = getelementptr inbounds [100 x i32], [100 x i32]* %4, i64 0, i64 %29
  %56 = load i32, i32* %54, align 4, !tbaa !2
  br label %57

57:                                               ; preds = %66, %53
  %58 = phi i32 [ 0, %53 ], [ %67, %66 ]
  %59 = add nsw i32 %56, %58
  %60 = icmp ult i32 %59, 512
  br label %69

61:                                               ; preds = %66, %49
  %62 = add nuw nsw i64 %29, 1
  %63 = icmp eq i64 %62, 100
  br i1 %63, label %27, label %64

64:                                               ; preds = %61, %27
  %65 = phi i64 [ %62, %61 ], [ 0, %27 ]
  br label %28

66:                                               ; preds = %76
  %67 = add nuw nsw i32 %58, 1
  %68 = icmp slt i32 %67, %51
  br i1 %68, label %57, label %61

69:                                               ; preds = %76, %57
  %70 = phi i32 [ 0, %57 ], [ %77, %76 ]
  %71 = add nsw i32 %50, %70
  %72 = icmp ult i32 %71, 256
  %73 = and i1 %60, %72
  br i1 %73, label %74, label %76

74:                                               ; preds = %69
  %75 = load i32, i32* %55, align 4, !tbaa !2
  tail call void @simPutPixel(i32 %59, i32 %71, i32 %75) #3
  br label %76

76:                                               ; preds = %74, %69
  %77 = add nuw nsw i32 %70, 1
  %78 = icmp eq i32 %77, %51
  br i1 %78, label %66, label %69
}

; Function Attrs: argmemonly nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg, i8* nocapture) #1

declare dso_local i32 @simRand(...) local_unnamed_addr #2

declare dso_local void @simPutPixel(i32, i32, i32) local_unnamed_addr #2

declare dso_local void @simFlush(...) local_unnamed_addr #2

declare dso_local void @simClear(...) local_unnamed_addr #2

attributes #0 = { noreturn nounwind uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { argmemonly nounwind willreturn }
attributes #2 = { "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.0-4ubuntu1 "}
!2 = !{!3, !3, i64 0}
!3 = !{!"int", !4, i64 0}
!4 = !{!"omnipotent char", !5, i64 0}
!5 = !{!"Simple C/C++ TBAA"}
