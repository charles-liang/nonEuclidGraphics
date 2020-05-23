#pragma once

/*
	在 WorldExpamle.h 中提供了一些参数方程描述的世界;
	直接用这里的 Example 会方便很多。

	TODO
*/

#include <core/mat.h>
#include <core/func.h>
#include <core/geometry.h>

using namespace cgcore;

static const float A = 0.1f;

namespace nonEuc
{
	namespace WorldExample
	{
		class WorldExampleBase
		{
		public:
			/*
			virtual void regularize_ref(vecf3& v) = 0;
			virtual vecf3 regularize(const vecf3& v) = 0;

			virtual vecf4 coord(const vecf3& v) = 0;
			virtual matf43 jacobi(const vecf3& v) = 0;
			virtual	matf3 metric(const vecf3& v) = 0;
			virtual tensorf333 gamma(const vecf3& v) = 0;
			*/
		};

		
		class Gaussian : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			static vecf4 coord(const vecf3& u);

			static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		};

		/*
		3次超球面空间（由于参数表示问题：存在若干奇点）
		*/
		class HyperSphere : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			static vecf4 coord(const vecf3& u);

			static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		};

		/*
		欧式空间：这个用于测试
		*/
		class Euclidean : WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			static vecf4 coord(const vecf3& u);

			static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		};

		class OneRecursive : WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		};

		// 螺旋曲面的一个推广
		class Helicoid : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		};

		// 双曲空间，用了球坐标，有点问题
		class Hyperbolic : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		};

		// 不用球坐标的双曲空间(退化)
		class Hyperbolic1 : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);
		
		};

		// 双曲空间
		class Hyperbolic2 : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);

		};

		// 双曲空间(单叶双曲面)
		class Hyperbolic3 : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);

		};
		
		class Schwarzschild : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);

		};

		class Schwarzschild2 : public WorldExampleBase
		{
		public:
			static void regularize_ref(vecf3& u, int i, int j, int k);

			static vecf3 regularize(const vecf3& u, int i, int j, int k);

			//static vecf4 coord(const vecf3& u);

			//static matf43 jacobi(const vecf3& u);

			static matf3 metric(const vecf3& u);

			static tensorf333 gamma(const vecf3& u);

		};
	}
	
}